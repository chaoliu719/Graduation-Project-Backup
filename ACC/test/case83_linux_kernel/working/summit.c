
#line 7 "summit.mc"
struct physid_mask {unsigned long mask[(((256) + 32 - 1) / 32)]; }; 
#line 9 "summit.mc"
typedef struct physid_mask physid_mask_t; 
#line 13 "summit.mc"
static inline  __attribute__  (( always_inline ))  physid_mask_t ioapic_phys_id_map( physid_mask_t phys_id_map)  {

#line 15 "summit.mc"
return ({ 
#line 15 "summit.mc"

#line 15 "summit.mc"
 physid_mask_t __physid_mask = {{[0 ... (((256) + 32 - 1) / 32) - 1] = 0UL}};
#line 15 "summit.mc"
__physid_mask.mask[0] = 0x0F; 
#line 15 "summit.mc"
__physid_mask; } ); }
 
#line 19 "summit.mc"
static inline  __attribute__  (( always_inline ))  physid_mask_t apicid_to_cpu_present(int apicid)  {

#line 20 "summit.mc"
return ({ 
#line 20 "summit.mc"

#line 20 "summit.mc"
 physid_mask_t __physid_mask = {{[0 ... (((256) + 32 - 1) / 32) - 1] = 0UL}};
#line 20 "summit.mc"
set_bit(0, (__physid_mask).mask); 
#line 20 "summit.mc"
__physid_mask; } ); }
 
