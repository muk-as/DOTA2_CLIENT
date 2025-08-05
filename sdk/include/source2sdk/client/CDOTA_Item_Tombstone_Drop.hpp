#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Item_Physical.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa88
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Item_Tombstone_Drop : public source2sdk::client::C_DOTA_Item_Physical
        {
        public:
            std::int32_t m_iTempViewer; // 0xa80            
            std::int32_t m_iTeam; // 0xa84            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_Tombstone_Drop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Item_Tombstone_Drop) == 0xa88);
    };
};
