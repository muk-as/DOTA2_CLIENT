#pragma once
#include "source2sdk/server/CDOTA_Item_Physical.hpp"
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
    // Size: 0x7b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Item_Tombstone_Drop : public server::CDOTA_Item_Physical
    {
    public:
        int32_t m_iTempViewer; // 0x7b0        
        int32_t m_iTeam; // 0x7b4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Tombstone_Drop because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Tombstone_Drop) == 0x7b8);
};
