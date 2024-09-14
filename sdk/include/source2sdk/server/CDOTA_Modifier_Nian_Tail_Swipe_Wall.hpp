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
    // Size: 0x1758
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nian_Tail_Swipe_Wall : public client::CDOTA_Buff
    {
    public:
        Vector m_vWallStartPosition; // 0x16e8        
        Vector m_vWallDirection; // 0x16f4        
        Vector m_vWallLeft; // 0x1700        
        int32_t m_DamageAmount; // 0x170c        
        int32_t m_DamageType; // 0x1710        
        float speed; // 0x1714        
        float starting_width; // 0x1718        
        float ending_width; // 0x171c        
        float stun_duration; // 0x1720        
        float fly_duration; // 0x1724        
        float fly_distance; // 0x1728        
        client::ParticleIndex_t m_nFXIndex; // 0x172c        
        entity2::GameTime_t m_flWallStartTime; // 0x1730        
        float m_flScalar; // 0x1734        
        // m_EntitiesToExclude has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_EntitiesToExclude;
        char m_EntitiesToExclude[0x18]; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x1750[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Tail_Swipe_Wall because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nian_Tail_Swipe_Wall) == 0x1758);
};
