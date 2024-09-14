#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tiny_Tree_Grab : public client::CDOTA_Buff
    {
    public:
        int32_t attack_count; // 0x16e8        
        int32_t bonus_damage; // 0x16ec        
        int32_t bonus_damage_buildings; // 0x16f0        
        float stun_duration; // 0x16f4        
        int32_t attack_range; // 0x16f8        
        int32_t m_nOriginalAttackCapability; // 0x16fc        
        float bat_increase; // 0x1700        
        int32_t speed_reduction; // 0x1704        
        int32_t m_nBonusAttackRange; // 0x1708        
        // m_hStolenTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hStolenTree;
        char m_hStolenTree[0x4]; // 0x170c        
        client::ParticleIndex_t m_nFXIndex; // 0x1710        
        client::ParticleIndex_t m_nFXAttackIndex; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tiny_Tree_Grab because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tiny_Tree_Grab) == 0x1718);
};
