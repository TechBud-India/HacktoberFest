using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fire : MonoBehaviour
{

    public float speed = 5f;
    public int damage = 200;
    public Rigidbody2D rb2d;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    void OnTriggerEnter2D(Collider2D hitInfo)
    {
        enemyscript enemy = hitInfo.GetComponent<enemyscript>();
        enemy.TakeDamage(damage);
        Debug.Log("Hit");
        
    }

    
}
