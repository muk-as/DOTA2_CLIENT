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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_MonkeyKing_BouncePerch : public client::CDOTA_Buff
    {
    public:
        // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTree;
        char m_hTree[0x4]; // 0x16e8        
        bool m_bGroundToTree; // 0x16ec        
        bool m_bTreeToGround; // 0x16ed        
        bool m_bTreeToTree; // 0x16ee        
        [[maybe_unused]] std::uint8_t pad_0x16ef[0x1]; // 0x16ef
        float perched_day_vision; // 0x16f0        
        float perched_night_vision; // 0x16f4        
        bool m_bAbilityIsStolen; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16f9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_BouncePerch because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MonkeyKing_BouncePerch) == 0x1700);
};
