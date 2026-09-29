#include <stdio.h>
#define ARTICHOKE_PRICE 2.05     // 洋蓟价格：2.05美元/磅
#define BEET_PRICE 1.15          // 甜菜价格：1.15美元/磅
#define CARROT_PRICE 1.09        // 胡萝卜价格：1.09美元/磅

#define DISCOUNT_RATE 0.05       // 折扣率：5%
#define DISCOUNT_LIMIT 100.00    // 优惠界限：商品总价达到100美元时享受折扣

#define WEIGHT_LIMIT_1 5.0       // 第一档重量界限：5磅
#define WEIGHT_LIMIT_2 20.0      // 第二档重量界限：20磅

#define SHIPPING_SMALL 6.50      // 订单重量不超过5磅时的运费
#define SHIPPING_MEDIUM 14.00    // 订单重量超过5磅但不超过20磅时的运费
#define SHIPPING_EXTRA 0.50      // 超过20磅后，每多1磅增加0.50美元运费

int main (void) {
    double discount_price ;
    double primitive_price = 0 ;
    double discount ;
    double final_price ;

    double artichoke_weight = 0;
    double beet_weight = 0;
    double carrot_weight = 0;
    double weight = 0;
    double total_weight , shipping_fee ;

    double artichoke_cost;
    double beet_cost;
    double carrot_cost;


    char vegetable = 's' ;

    //用户输入选择
    while (vegetable != 'q' ){
    printf("Input a for artichoke\n"
       "Input b for beet\n"
       "Input c for carrot\n"
       "Input q to quit\n");

    printf("Now input the vegetable you want:") ;
    scanf(" %c" , &vegetable) ;


        switch (vegetable) {
            case 'a' :
                printf("Please input the weight you want:");
                scanf("%lf" , &weight);
                primitive_price += weight * ARTICHOKE_PRICE ;
                artichoke_weight += weight ;
                break;

            case 'b' :
                printf("Please input the weight you want:") ;
                scanf("%lf" , &weight);
                primitive_price += weight * BEET_PRICE ;
                beet_weight += weight ;
                break;

            case 'c' :
                printf("Please input the weight you want:") ;
                scanf("%lf" , &weight);
                primitive_price += weight * CARROT_PRICE ;
                carrot_weight += weight ;
                break;

            case 'q' :
                break;

            default:
                printf("Please input the right option");
                continue;
        }
    }

    artichoke_cost = artichoke_weight * ARTICHOKE_PRICE;
    beet_cost = beet_weight * BEET_PRICE;
    carrot_cost = carrot_weight * CARROT_PRICE;

    //计算总重量
    total_weight = artichoke_weight + beet_weight + carrot_weight ;

    //计算运费
    if (total_weight == 0) {
        shipping_fee = 0 ;
    }
    else if (total_weight <= WEIGHT_LIMIT_1) {
        shipping_fee = SHIPPING_SMALL ;
    }
    else if (total_weight > WEIGHT_LIMIT_1 && total_weight <= WEIGHT_LIMIT_2) {
        shipping_fee = SHIPPING_MEDIUM ;
    }
    else {
        shipping_fee = SHIPPING_MEDIUM + (total_weight - WEIGHT_LIMIT_2) * SHIPPING_EXTRA ;
    }

    //计算折扣
    if (primitive_price >= DISCOUNT_LIMIT) {
        discount_price = primitive_price * (1- DISCOUNT_RATE ) ;
    }
    else {
        discount_price = primitive_price ;
    }
    discount = primitive_price - discount_price ;
    final_price = discount_price + shipping_fee ;



    //打印小票
    printf("\n*************** Order Summary ***************\n");

    printf("Artichoke: $%.2f/lb, Weight: %.2f lb, Cost: $%.2f\n",
           ARTICHOKE_PRICE, artichoke_weight, artichoke_cost);

    printf("Beet:      $%.2f/lb, Weight: %.2f lb, Cost: $%.2f\n",
           BEET_PRICE, beet_weight, beet_cost);

    printf("Carrot:    $%.2f/lb, Weight: %.2f lb, Cost: $%.2f\n",
           CARROT_PRICE, carrot_weight, carrot_cost);

    printf("---------------------------------------------\n");

    printf("Total weight:     %.2f lb\n", total_weight);
    printf("Original price:   $%.2f\n", primitive_price);
    printf("Discount:         $%.2f\n", discount);
    printf("Shipping fee:     $%.2f\n", shipping_fee);
    printf("Final price:      $%.2f\n", final_price);

    printf("*********************************************\n");

return 0;
    }

