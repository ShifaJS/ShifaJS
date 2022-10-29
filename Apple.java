public enum Apple {
    JONATHAN(25),GOLDENDEL(32),REDDEL(30),WINESAP(15),CORTLAND();

    private int price;
    Apple(int price){
        this.price=price;
    }
    Apple(){
        price=-1;
    }

    public int getPrice() {
        return price;
    }
}
