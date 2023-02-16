/*
 * Copyright (c) 2021 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_TRACING_SYSVIEW_IDS_H_
#define ZEPHYR_TRACING_SYSVIEW_IDS_H_

#ifdef __cplusplus
extern "C" {
#endif

#define TID_OFFSET (32u)

#define TID_SCHED_LOCK (0u + TID_OFFSET)
#define TID_SCHED_UNLOCK (1u + TID_OFFSET)
#define TID_BUSYWAIT (2u + TID_OFFSET)

#define TID_IRQ_ENABLE (3u + TID_OFFSET)
#define TID_IRQ_DISABLE (4u + TID_OFFSET)

#define TID_MUTEX_INIT (5u + TID_OFFSET)
#define TID_MUTEX_UNLOCK (6u + TID_OFFSET)
#define TID_MUTEX_LOCK (7u + TID_OFFSET)

#define TID_SEMA_INIT (8u + TID_OFFSET)
#define TID_SEMA_GIVE (9u + TID_OFFSET)
#define TID_SEMA_TAKE (10u + TID_OFFSET)
#define TID_SEMA_RESET (59u + TID_OFFSET)

#define TID_QUEUE_INIT (11u + TID_OFFSET)
#define TID_QUEUE_APPEND (12u + TID_OFFSET)
#define TID_QUEUE_ALLOC_APPEND (13u + TID_OFFSET)
#define TID_QUEUE_PREPEND (14u + TID_OFFSET)
#define TID_QUEUE_ALLOC_PREPEND (15u + TID_OFFSET)
#define TID_QUEUE_INSERT (16u + TID_OFFSET)
#define TID_QUEUE_APPEND_LIST (17u + TID_OFFSET)
#define TID_QUEUE_GET (18u + TID_OFFSET)
#define TID_QUEUE_REMOVE (19u + TID_OFFSET)
#define TID_QUEUE_CANCEL_WAIT (20u + TID_OFFSET)
#define TID_QUEUE_PEAK_HEAD (21u + TID_OFFSET)
#define TID_QUEUE_PEAK_TAIL (22u + TID_OFFSET)

#define TID_STACK_INIT (23u + TID_OFFSET)
#define TID_STACK_PUSH (24u + TID_OFFSET)
#define TID_STACK_POP (25u + TID_OFFSET)
#define TID_QUEUE_STACK_CLEANUP (26u + TID_OFFSET)

#define TID_MSGQ_INIT (27u + TID_OFFSET)
#define TID_MSGQ_PUT (28u + TID_OFFSET)
#define TID_MSGQ_GET (29u + TID_OFFSET)
#define TID_MSGQ_CLEANUP (30u + TID_OFFSET)
#define TID_MSQG_PEEK (31u + TID_OFFSET)
#define TID_MSGQ_PURGE (32u + TID_OFFSET)

#define TID_MBOX_INIT (33u + TID_OFFSET)
#define TID_MBOX_PUT (34u + TID_OFFSET)
#define TID_MBOX_ASYNC_PUT (35u + TID_OFFSET)
#define TID_MBOX_GET (36u + TID_OFFSET)
#define TID_MBOX_DATA_GET (37u + TID_OFFSET)
#define TID_MBOX_DATA_BLOCK_GET (38u + TID_OFFSET)

#define TID_PIPE_INIT (39u + TID_OFFSET)
#define TID_PIPE_CLEANUP (40u + TID_OFFSET)
#define TID_PIPE_PUT (41u + TID_OFFSET)
#define TID_PIPE_GET (42u + TID_OFFSET)
#define TID_PIPE_BLOCK_GET (43u + TID_OFFSET)

#define TID_HEAP_INIT (44u + TID_OFFSET)
#define TID_HEAP_ALLOC (45u + TID_OFFSET)
#define TID_HEAP_FREE (46u + TID_OFFSET)
#define TID_HEAP_ALIGNED_ALLOC (47u + TID_OFFSET)

#define TID_MSLAB_INIT (52u + TID_OFFSET)
#define TID_MSLAB_ALLOC (53u + TID_OFFSET)
#define TID_MSLAB_FREE (54u + TID_OFFSET)

#define TID_TIMER_INIT (55u + TID_OFFSET)
#define TID_TIMER_START (56u + TID_OFFSET)
#define TID_TIMER_STOP (57u + TID_OFFSET)
#define TID_TIMER_STATUS_SYNC (58u + TID_OFFSET)
#define TID_TIMER_USER_DATA_GET (60u + TID_OFFSET)
#define TID_TIMER_EXPIRY_FN (61u + TID_OFFSET)
#define TID_TIMER_STOP_FN (62u + TID_OFFSET)

#define TID_SLEEP (63u + TID_OFFSET)
#define TID_MSLEEP (64u + TID_OFFSET)
#define TID_USLEEP (65u + TID_OFFSET)

#define TID_THREAD_PRIORITY_SET (66u + TID_OFFSET)
#define TID_THREAD_WAKEUP (67u + TID_OFFSET)
#define TID_THREAD_ABORT (68u + TID_OFFSET)
#define TID_THREAD_START (69u + TID_OFFSET)
#define TID_THREAD_SUSPEND (70u + TID_OFFSET)
#define TID_THREAD_RESUME (71u + TID_OFFSET)
#define TID_THREAD_JOIN (72u + TID_OFFSET)
#define TID_THREAD_YIELD (73u + TID_OFFSET)
#define TID_THREAD_USERMODE_ENTER (74u + TID_OFFSET)
#define TID_THREAD_FOREACH (75u + TID_OFFSET)
#define TID_THREAD_FOREACH_UNLOCKED (76u + TID_OFFSET)
#define TID_THREAD_NAME_SET (123u + TID_OFFSET)

#define TID_CONDVAR_INIT (77u + TID_OFFSET)
#define TID_CONDVAR_SIGNAL (78u + TID_OFFSET)
#define TID_CONDVAR_BROADCAST (79u + TID_OFFSET)
#define TID_CONDVAR_WAIT (80u + TID_OFFSET)

#define TID_WORK_CANCEL (81u + TID_OFFSET)
#define TID_WORK_CANCEL_DELAYABLE (82u + TID_OFFSET)
#define TID_WORK_CANCEL_DELAYABLE_SYNC (83u + TID_OFFSET)
#define TID_WORK_CANCEL_SYNC (84u + TID_OFFSET)
#define TID_WORK_DELAYABLE_INIT (85u + TID_OFFSET)
#define TID_WORK_QUEUE_DRAIN (86u + TID_OFFSET)
#define TID_WORK_FLUSH (87u + TID_OFFSET)
#define TID_WORK_FLUSH_DELAYABLE (88u + TID_OFFSET)
#define TID_WORK_INIT (89u + TID_OFFSET)
#define TID_WORK_POLL_CANCEL (90u + TID_OFFSET)
#define TID_WORK_POLL_INIT (91u + TID_OFFSET)
#define TID_WORK_POLL_SUBMIT (92u + TID_OFFSET)
#define TID_WORK_POLL_SUBMIT_TO_QUEUE (93u + TID_OFFSET)
#define TID_WORK_QUEUE_START (94u + TID_OFFSET)
#define TID_WORK_RESCHEDULE (95u + TID_OFFSET)
#define TID_WORK_RESCHEDULE_FOR_QUEUE (96u + TID_OFFSET)
#define TID_WORK_SCHEDULE (97u + TID_OFFSET)
#define TID_WORK_SCHEDULE_FOR_QUEUE (98u + TID_OFFSET)
#define TID_WORK_SUBMIT (99u + TID_OFFSET)
#define TID_WORK_SUBMIT_TO_QUEUE (100u + TID_OFFSET)
#define TID_WORK_QUEUE_UNPLUG (101u + TID_OFFSET)
#define TID_WORK_QUEUE_INIT (102u + TID_OFFSET)

#define TID_FIFO_INIT (110u + TID_OFFSET)
#define TID_FIFO_CANCEL_WAIT (111u + TID_OFFSET)
#define TID_FIFO_ALLOC_PUT (112u + TID_OFFSET)
#define TID_FIFO_PUT_LIST (113u + TID_OFFSET)
#define TID_FIFO_PUT_SLIST (114u + TID_OFFSET)
#define TID_FIFO_PEAK_HEAD (115u + TID_OFFSET)
#define TID_FIFO_PEAK_TAIL (116u + TID_OFFSET)
#define TID_FIFO_PUT (117u + TID_OFFSET)
#define TID_FIFO_GET (118u + TID_OFFSET)

#define TID_LIFO_INIT (119u + TID_OFFSET)
#define TID_LIFO_PUT (120u + TID_OFFSET)
#define TID_LIFO_GET (121u + TID_OFFSET)
#define TID_LIFO_ALLOC_PUT (122u + TID_OFFSET)


#define TID_PM_SYSTEM_SUSPEND (124u + TID_OFFSET)
#define TID_PM_DEVICE_RUNTIME_GET (125u + TID_OFFSET)
#define TID_PM_DEVICE_RUNTIME_PUT (126u + TID_OFFSET)
#define TID_PM_DEVICE_RUNTIME_PUT_ASYNC (127u + TID_OFFSET)
#define TID_PM_DEVICE_RUNTIME_ENABLE (128u + TID_OFFSET)
#define TID_PM_DEVICE_RUNTIME_DISABLE (129u + TID_OFFSET)

#define TID_SYSCALL (130u + TID_OFFSET)

/* latest ID is 130 */

#ifdef __cplusplus
}
#endif

#endif /* ZEPHYR_TRACING_SYSVIEW_IDS_H_ */
