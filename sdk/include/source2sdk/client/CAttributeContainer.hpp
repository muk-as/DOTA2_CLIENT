#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAttributeManager.hpp"
#include "source2sdk/client/C_EconItemView.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x140
        // Has VTable
        // MNetworkNoBase
        // 
        // static metadata: MNetworkIncludeByName "m_ProviderType"
        // static metadata: MNetworkIncludeByName "m_hOuter"
        // static metadata: MNetworkIncludeByName "m_iReapplyProvisionParity"
        // static metadata: MNetworkIncludeByName "m_Item"
        // static metadata: MNetworkVarNames "CEconItemView m_Item"
        #pragma pack(push, 1)
        class CAttributeContainer : public source2sdk::client::CAttributeManager
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::C_EconItemView m_Item; // 0x68            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAttributeContainer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAttributeContainer) == 0x140);
    };
};
