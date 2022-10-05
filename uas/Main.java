class BangunDatar {
    
    float luas(){
        System.out.println("Menghitung luas bangun datar");
        return 0;
    }
    
    float keliling(){
        System.out.println("Menghitung keliling bangun datar");
        return 0;
    }
}

class Persegi extends BangunDatar {
    float sisi;

    float luas(){
        float luas = sisi * sisi;
        System.out.println("Luas Persegi: " + luas);
        return luas;
    }

    float keliling(){
        float keliling = 4 * sisi;
        System.out.println("Keliling Persegi: " + keliling);
        return keliling;
    }
}

class PersegiPanjang extends BangunDatar {
    float panjang;
    float lebar;

    float luas(){
        float luas = panjang * lebar;
        System.out.println("Luas Persegi Panjang:" + luas);
        return luas;
    }

    float keliling(){
        float keliling = 2 * panjang + 2 * lebar;
        System.out.println("Keliling Persegi Panjang: " + keliling);
        return keliling;
    }
}

class Main {
    public static void main(String[] args) {
        
        // membuat objek bangun datar
        BangunDatar bangunDatar = new BangunDatar();
        
        // membuat objek persegi dan mengisi nilai properti
        Persegi persegi = new Persegi();
        persegi.sisi = 2;
        
        // membuat objek Persegi Panjang dan mengisi nilai properti
        PersegiPanjang persegiPanjang = new PersegiPanjang();
        persegiPanjang.panjang = 8;
        persegiPanjang.lebar = 4;
  
        // memanggil method luas dan keliling
        bangunDatar.luas();
        bangunDatar.keliling();
        
        persegi.luas();
        persegi.keliling();
 
        persegiPanjang.luas();
        persegiPanjang.keliling();
    }
}