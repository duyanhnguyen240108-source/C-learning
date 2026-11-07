#include <stdio.h>

int main() {
	 int thang, nam;
	 printf("Nhap thang: ");
	 scanf("%d", &thang);
	 printf("Nhap nam: ");
	 scanf("%d", &nam);
	 switch (thang) {
	 	case 1:
	 	case 3:
	 	case 5:
	 	case 7:
	 	case 8:
	 	case 10:
	 	case 12:
	 		printf("thang %d co 31 ngay.", thang);
	 		break;
	 	case 4:
	 	case 6:
	 	case 9:
	 	case 11:
	 		printf("thang %d co 30 ngay.", thang);
	 		break;
	 	case 2:
	 		if ( (nam % 400) || (nam % 4 ==0 && nam % 100 != 0 ) )
				{printf("thang 2 nam %d co 29 ngay.", nam);}
	 		else
	 		    {printf("thang 2 nam %d co 28 ngay.", nam);}
	 		break;
	 		 		
	 	default:
	 		printf("thang khong hop le");
	 		
	 }
	 return 0;
}
