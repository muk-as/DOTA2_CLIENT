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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tidehunter_DeadInTheWater : public client::CDOTA_Buff
    {
    public:
        int32_t max_movement_speed; // 0x1708        
        int32_t chain_length; // 0x170c        
        // m_hAnchor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAnchor;
        char m_hAnchor[0x4]; // 0x1710        
        bool m_bDragging; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tidehunter_DeadInTheWater because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tidehunter_DeadInTheWater) == 0x1718);
};
