#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDotaSubquestBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CDotaSubquestBuyItems : public source2sdk::server::CDotaSubquestBase
        {
        public:
            // m_itemList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<char*> m_itemList;
            char m_itemList[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDotaSubquestBuyItems because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDotaSubquestBuyItems) == 0x_);
    };
};
