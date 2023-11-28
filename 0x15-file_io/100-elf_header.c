#include "main.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    display_elf_header(argv[1]);

    return 0;
}

Elf64_Ehdr elf_header;
ssize_t bytes_read;
int i;

void display_elf_header(const char *filename)
{
    int fd = open(filename, O_RDONLY);

    if (fd == -1)
    {
        perror("Error opening file");
        exit(98);
    }

    bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));

    if (bytes_read == -1 || bytes_read != sizeof(Elf64_Ehdr))
    {
        perror("Error reading ELF header");
        close(fd);
        exit(98);
    }

    if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
        elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
        elf_header.e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        exit(98);
    }

    /* Display ELF header information */
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", elf_header.e_ident[i]);
    printf("\n");

    printf("  Class:                             %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "2's complement, big-endian");
    printf("  Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", elf_header.e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);

    printf("  Type:                              %s\n", elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown");
    printf("  Entry point address:               %#lx\n", (unsigned long)elf_header.e_entry);

    close(fd);
}

