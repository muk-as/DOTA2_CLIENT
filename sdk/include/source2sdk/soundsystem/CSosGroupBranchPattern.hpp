#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: M_LEGACY_OptInToSchemaPropertyDomain
        #pragma pack(push, 1)
        class CSosGroupBranchPattern
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Event Name"
            bool m_bMatchEventName; // 0x_            
            // metadata: MPropertyFriendlyName "Sub-String"
            bool m_bMatchEventSubString; // 0x_            
            // metadata: MPropertyFriendlyName "Source Entity Index"
            bool m_bMatchEntIndex; // 0x_            
            // metadata: MPropertyFriendlyName "Opvar Float"
            bool m_bMatchOpvar; // 0x_            
            // metadata: MPropertyFriendlyName "Opvar String"
            bool m_bMatchString; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::CSosGroupBranchPattern, m_bMatchEventName) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosGroupBranchPattern, m_bMatchEventSubString) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosGroupBranchPattern, m_bMatchEntIndex) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosGroupBranchPattern, m_bMatchOpvar) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosGroupBranchPattern, m_bMatchString) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupBranchPattern) == 0x_);
    };
};
