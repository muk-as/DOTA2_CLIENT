#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_MonkeyKing_BouncePerch : public client::CDOTA_Buff
    {
    public:
        // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTree;
        char m_hTree[0x4]; // 0x1708        
        bool m_bGroundToTree; // 0x170c        
        bool m_bTreeToGround; // 0x170d        
        bool m_bTreeToTree; // 0x170e        
        [[maybe_unused]] std::uint8_t pad_0x170f[0x1]; // 0x170f
        float perched_day_vision; // 0x1710        
        float perched_night_vision; // 0x1714        
        bool m_bAbilityIsStolen; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_BouncePerch because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MonkeyKing_BouncePerch) == 0x1720);
};
