#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9b0
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CDOTA_ShopTrigger : public server::CBaseTrigger
    {
    public:
        int32_t m_ShopType; // 0x980        
        [[maybe_unused]] std::uint8_t pad_0x984[0x4]; // 0x984
        entity2::CEntityIOOutput m_OnTrigger; // 0x988        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_ShopTrigger because it is not a standard-layout class
    static_assert(sizeof(CDOTA_ShopTrigger) == 0x9b0);
};
