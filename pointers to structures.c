struct Point 
{
    int x;
    int y;
};

int main() 
{
    struct Point p1 = {10,20};
    struct Point *ptr = &p1;

    printf("Coordinates: (%d, %d)\n", ptr->x, ptr->y);

    return 0;
}
