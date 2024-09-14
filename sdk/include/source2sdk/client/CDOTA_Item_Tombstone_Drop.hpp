#pragma once
#include "source2sdk/client/C_DOTA_Item_Physical.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Item_Tombstone_Drop : public client::C_DOTA_Item_Physical
    {
    public:
        int32_t m_iTempViewer; // 0x8c0        
        int32_t m_iTeam; // 0x8c4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Tombstone_Drop because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Tombstone_Drop) == 0x8c8);
};
