#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/IKChannelMode.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct IKDemoCaptureSettings_t
        {
        public:
            // metadata: MPropertyFriendlyName "Target Parent"
            // metadata: MPropertyAttributeChoiceName "Bone"
            CUtlString m_parentBoneName; // 0x_            
            // metadata: MPropertyFriendlyName "Solver Mode"
            // metadata: MPropertyAutoRebuildOnChange
            source2sdk::animgraphlib::IKChannelMode m_eMode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "IK Chain"
            // metadata: MPropertyAttributeChoiceName "IKChain"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_ikChainName; // 0x_            
            // metadata: MPropertyFriendlyName "Start Bone"
            // metadata: MPropertyAttributeChoiceName "Bone"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_oneBoneStart; // 0x_            
            // metadata: MPropertyFriendlyName "End Bone"
            // metadata: MPropertyAttributeChoiceName "Bone"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_oneBoneEnd; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::IKDemoCaptureSettings_t, m_parentBoneName) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::IKDemoCaptureSettings_t, m_eMode) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::IKDemoCaptureSettings_t, m_ikChainName) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::IKDemoCaptureSettings_t, m_oneBoneStart) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::IKDemoCaptureSettings_t, m_oneBoneEnd) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::IKDemoCaptureSettings_t) == 0x_);
    };
};
