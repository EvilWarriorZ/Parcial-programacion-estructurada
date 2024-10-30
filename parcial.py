class Libro:
    def __init__(self, titulo, autor, año, editorial, ISBN, paginas, stock):
        self.titulo = titulo
        self.autor = autor
        self.año = año
        self.editorial = editorial
        self.ISBN = ISBN
        self.paginas = paginas
        self.stock = stock

class Lector:
    def __init__(self, nombre, DNI, libro_solicitado):
        self.nombre = nombre
        self.DNI = DNI
        self.libro_solicitado = libro_solicitado

def guardar_libro(archivo, libro):
    archivo.write(f"Titulo: {libro.titulo}\n")
    archivo.write(f"Autor: {libro.autor}\n")
    archivo.write(f"Se publico en: {libro.año}\n")
    archivo.write(f"Editorial: {libro.editorial}\n")
    archivo.write(f"ISBN: {libro.ISBN}\n")
    archivo.write(f"Cantidad de paginas: {libro.paginas}\n")
    archivo.write(f"Stock disponible: {libro.stock}\n")
    archivo.write("\n")

def nuevo_libro(archivo):
    titulo = input("Ingrese el título: ")
    autor = input("Ingrese el autor: ")
    año = int(input("Ingrese el año de publicación: "))
    editorial = input("Ingrese la editorial: ")
    ISBN = input("Ingrese el ISBN: ")
    paginas = int(input("Ingrese la cantidad de páginas: "))
    stock = int(input("Ingrese el stock disponible: "))
    libro = Libro(titulo, autor, año, editorial, ISBN, paginas, stock)
    guardar_libro(archivo, libro)

def main():
    try:
        with open("biblioteca.txt", "a") as archivo:
            print("Hola, bienvenido al gestionador de biblioteca. Por favor, elija la operación que desea realizar escribiendo el número que le corresponde y presionando ENTER.")
            print("1. Agregar libros a la lista enlazada.")
            print("2. Ordenar libros.")
            print("3. Buscar libros.")
            print("4. Solicitar libros.")
            print("5. Devolver libros.")
            print("6. Guardar y cargar datos.")
            opcion = int(input())

            if opcion == 1:
                print("Ha elegido la opción 1.")
                nuevo_libro(archivo)
                print("El archivo se ha actualizado correctamente. Fin de la ejecución.")
            elif opcion == 2:
                print("Ha elegido la opción 2.")

                # print("Los libros se han ordenado alfabéticamente en biblioteca.txt.")
            elif opcion == 3:
                print("Ha elegido la opción 3.")
 
            elif opcion == 4:
                print("Ha elegido la opción 4.")

            elif opcion == 5:
                print("Ha elegido la opción 5.")

            elif opcion == 6:
                print("Ha elegido la opción 6.")

            else:
                print("Por favor, elija una opción válida.")

    except IOError:
        print("Error, no se pudo abrir el archivo biblioteca.txt")

if __name__ == "__main__":
    main()
