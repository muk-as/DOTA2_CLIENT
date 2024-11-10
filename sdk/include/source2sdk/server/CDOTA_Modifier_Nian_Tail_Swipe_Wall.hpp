#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1778
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nian_Tail_Swipe_Wall : public client::CDOTA_Buff
    {
    public:
        Vector m_vWallStartPosition; // 0x1708        
        Vector m_vWallDirection; // 0x1714        
        Vector m_vWallLeft; // 0x1720        
        int32_t m_DamageAmount; // 0x172c        
        int32_t m_DamageType; // 0x1730        
        float speed; // 0x1734        
        float starting_width; // 0x1738        
        float ending_width; // 0x173c        
        float stun_duration; // 0x1740        
        float fly_duration; // 0x1744        
        float fly_distance; // 0x1748        
        client::ParticleIndex_t m_nFXIndex; // 0x174c        
        entity2::GameTime_t m_flWallStartTime; // 0x1750        
        float m_flScalar; // 0x1754        
        // m_EntitiesToExclude has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_EntitiesToExclude;
        char m_EntitiesToExclude[0x18]; // 0x1758        
        [[maybe_unused]] std::uint8_t pad_0x1770[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Tail_Swipe_Wall because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nian_Tail_Swipe_Wall) == 0x1778);
};
