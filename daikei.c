#include <stdio.h>
#include <math.h>

int main() {
    double x,y,z;
    typedef struct {
        int kahen;
        int jouhen;
        int takasa;
    }daikei;

    daikei da, db;
    printf("daを入力してください->\n");
    printf("dbを入力してください->\n");
    scanf("%d %d %d", &da.kahen, &da.jouhen, &da.takasa);
    scanf("%d %d %d", &db.kahen, &db.jouhen, &db.takasa);

    x = ((da.kahen + da.jouhen) * da.takasa) / (double)2.0;
    y = ((db.kahen + db.jouhen) * db.takasa) / (double)2.0;

    printf("求める面積は da = %f db = %f\n", x ,y);

    daikei dc;
    dc.kahen = da.kahen + db.kahen;
    dc.jouhen = da.jouhen + db.jouhen;
    dc.takasa = da.takasa + db.takasa;

    z = ((dc.kahen + dc.jouhen) * dc.takasa) / (double)2.0;

    printf("求める面積は dc = %f", z);
    return 0;

}
