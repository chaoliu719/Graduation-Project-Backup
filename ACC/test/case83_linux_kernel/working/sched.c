
#line 2 "sched.mc"
static void task_running_tick(struct rq *rq, struct task_struct *p)  {

#line 3200 "kernel/sched.c"
if ((!(--(p->time_slice)))){
{ 
#line 4 "sched.mc"
dequeue_task(p, (rq->active)); 
#line 5 "sched.mc"
set_tsk_need_resched(p); 
#line 6 "sched.mc"
(p->prio) = effective_prio(p); 
#line 7 "sched.mc"
(p->time_slice) = task_timeslice(p); 
#line 8 "sched.mc"
(p->first_time_slice) = 0; 
#line 10 "sched.mc"
if ((!(rq->expired_timestamp))){
(rq->expired_timestamp) = jiffies; }
#line 12 "sched.mc"
if ((!(((p)->prio) <= ((p)->static_prio) - ((((((p)->static_prio)) - 100 - 20) + 20) * ((((((100 + 40)) - 100)) * 25 / 100)) / (40) - 20 * (((((100 + 40)) - 100)) * 25 / 100) / 40 + 2))) || expired_starving(rq)){
{ 
#line 14 "sched.mc"
enqueue_task(p, (rq->expired)); 
#line 15 "sched.mc"
if ((p->static_prio) < (rq->best_expired_prio)){
(rq->best_expired_prio) = (p->static_prio); }} }else{
enqueue_task(p, (rq->active)); }} }else{
{ 
#line 3200 "kernel/sched.c"
if ((((p)->prio) <= ((p)->static_prio) - ((((((p)->static_prio)) - 100 - 20) + 20) * ((((((100 + 40)) - 100)) * 25 / 100)) / (40) - 20 * (((((100 + 40)) - 100)) * 25 / 100) / 40 + 2)) && (!((task_timeslice(p) - (p->time_slice)) % (((10 * 250 / 1000?:1)) * (1 << (((((((((100 + 40)) - 100)) * 25 / 100) - (((((p)->sleep_avg)) / (1000000000 / 250)) * (((((100 + 40)) - 100)) * 25 / 100) / ((100 * 250 / 1000) * (((((100 + 40)) - 100)) * 25 / 100))))?:1)) - 1)) * __cpus_weight((&(cpu_online_map)), 32)))) && ((p->time_slice) >= (((10 * 250 / 1000?:1)) * (1 << (((((((((100 + 40)) - 100)) * 25 / 100) - (((((p)->sleep_avg)) / (1000000000 / 250)) * (((((100 + 40)) - 100)) * 25 / 100) / ((100 * 250 / 1000) * (((((100 + 40)) - 100)) * 25 / 100))))?:1)) - 1)) * __cpus_weight((&(cpu_online_map)), 32))) && ((p->array) == (rq->active))){
{ } }} }
#line 3201 "kernel/sched.c"
out_unlock:  __raw_spin_unlock((&(((&(rq->lock)))->raw_lock))); }
 
