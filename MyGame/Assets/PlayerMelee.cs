using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMelee : MonoBehaviour
{
    public Transform AttackPoint;
    public float attackRange = 0.5f;
    public LayerMask enemyLayers;
    public Animator animator;
    public int attackDamage = 100;
    
    // Update is called once per frame
    void Update()
    {
        
    }

    void attack()
    {
        //play attack animation
        animator.SetTrigger("Attack");
        //enemy in 
        Collider2D[] hitEnemies = Physics2D.OverlapCircleAll(AttackPoint.position, attackRange, enemyLayers);

        //damage infliction
        foreach(Collider2D enemy in hitEnemies)
        {
            enemy.GetComponent<enemyscript>().TakeDamage(attackDamage);
            Debug.Log("hit");
        }
    }

    
}
