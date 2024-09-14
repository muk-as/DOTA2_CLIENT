#pragma once
#include "source2sdk/server/CDOTA_Item.hpp"
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
    // Size: 0x650
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Item_AeonDisk : public server::CDOTA_Item
    {
    public:
        int32_t m_nUses; // 0x648        
        int32_t max_level; // 0x64c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_AeonDisk because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_AeonDisk) == 0x650);
};
