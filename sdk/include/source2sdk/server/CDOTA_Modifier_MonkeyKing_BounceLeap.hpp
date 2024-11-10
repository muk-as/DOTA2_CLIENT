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
    // Size: 0x1758
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_MonkeyKing_BounceLeap : public client::CDOTA_Buff
    {
    public:
        float give_up_distance; // 0x1708        
        float ground_jump_distance; // 0x170c        
        float m_flZDelta; // 0x1710        
        float perched_day_vision; // 0x1714        
        float perched_night_vision; // 0x1718        
        Vector m_vStart; // 0x171c        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1728        
        Vector m_vTargetPos; // 0x172c        
        float m_flSpeed; // 0x1738        
        bool m_bTargetingEntity; // 0x173c        
        bool m_bGroundToTree; // 0x173d        
        bool m_bTreeToGround; // 0x173e        
        bool m_bTreeToTree; // 0x173f        
        bool m_bIsSpringJump; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1741[0x3]; // 0x1741
        float m_fSpringChanneledPercent; // 0x1744        
        int32_t m_nLeapSpeed; // 0x1748        
        client::ParticleIndex_t m_nFXIndex; // 0x174c        
        client::ParticleIndex_t m_nFXIndex2; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1754[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_BounceLeap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MonkeyKing_BounceLeap) == 0x1758);
};
