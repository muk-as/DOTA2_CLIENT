#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1760
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Primal_Beast_Uproar_Projectile_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t projectiles_per_stack; // 0x1708        
        int32_t projectile_speed; // 0x170c        
        float projectile_distance; // 0x1710        
        float projectile_width; // 0x1714        
        int32_t splinter_angle; // 0x1718        
        float split_delay; // 0x171c        
        int32_t projectile_waves; // 0x1720        
        int32_t m_nCurrentWaveCount; // 0x1724        
        int32_t tectonic_shift_projectiles; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4]; // 0x172c
        // m_vecEnemiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecEnemiesHit;
        char m_vecEnemiesHit[0x18]; // 0x1730        
        // m_vecProjectileHandles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_vecProjectileHandles;
        char m_vecProjectileHandles[0x18]; // 0x1748        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Primal_Beast_Uproar_Projectile_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Primal_Beast_Uproar_Projectile_Thinker) == 0x1760);
};
