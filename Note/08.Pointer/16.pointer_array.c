// Pointer array
// 포인터 배열

int main(void)
{
    int nums1[3] = { 11, 22, 33 };
    int nums2[1] = { 99, 33 };
    int nums3[4] = { 88, 77, 44 };
    
    int* num_pointers[3];
    num_pointers[0] = nums1;
    num_pointers[1] = nums2;
    num_pointers[2] = nums3;
}