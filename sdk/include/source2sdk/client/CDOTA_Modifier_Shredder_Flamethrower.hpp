#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Shredder_Flamethrower : public client::CDOTA_Buff
    {
    public:
        int32_t length; // 0x1708        
        int32_t width; // 0x170c        
        int32_t damage_per_second; // 0x1710        
        client::ParticleIndex_t m_nBeamFXIndex; // 0x1714        
        // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBeamEnd;
        char m_hBeamEnd[0x4]; // 0x1718        
        entity2::GameTime_t m_flLastHit; // 0x171c        
        // m_vecBurningTrees has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_BaseEntity*> m_vecBurningTrees;
        char m_vecBurningTrees[0x18]; // 0x1720        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_Flamethrower because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Shredder_Flamethrower) == 0x1738);
};
