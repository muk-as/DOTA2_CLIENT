#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimParamButton_t.hpp"
#include "source2sdk/animgraphlib/AnimParamNetworkSetting.hpp"
#include "source2sdk/animgraphlib/CAnimParameterBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CConcreteAnimParameter : public source2sdk::animgraphlib::CAnimParameterBase
        {
        public:
            // metadata: MPropertyFriendlyName "Preview Button"
            source2sdk::animgraphlib::AnimParamButton_t m_previewButton; // 0x_            
            // metadata: MPropertyFriendlyName "Network"
            source2sdk::animgraphlib::AnimParamNetworkSetting m_eNetworkSetting; // 0x_            
            // metadata: MPropertyFriendlyName "Force Latest Value"
            bool m_bUseMostRecentValue; // 0x_            
            // metadata: MPropertyFriendlyName "Auto Reset"
            bool m_bAutoReset; // 0x_            
            // metadata: MPropertyFriendlyName "Game Writable"
            // metadata: MPropertyGroupName "+Permissions"
            // metadata: MPropertyAttrStateCallback
            bool m_bGameWritable; // 0x_            
            // metadata: MPropertyFriendlyName "Graph Writable"
            // metadata: MPropertyGroupName "+Permissions"
            // metadata: MPropertyAttrStateCallback
            bool m_bGraphWritable; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CConcreteAnimParameter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CConcreteAnimParameter) == 0x_);
    };
};
