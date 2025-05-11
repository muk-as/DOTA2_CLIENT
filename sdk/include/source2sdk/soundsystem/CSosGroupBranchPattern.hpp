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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x10
        // Has VTable
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSosGroupBranchPattern
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertyFriendlyName "Event Name"
            bool m_bMatchEventName; // 0x8            
            // metadata: MPropertyFriendlyName "Sub-String"
            bool m_bMatchEventSubString; // 0x9            
            // metadata: MPropertyFriendlyName "Source Entity Index"
            bool m_bMatchEntIndex; // 0xa            
            // metadata: MPropertyFriendlyName "Opvar Float"
            bool m_bMatchOpvar; // 0xb            
            // metadata: MPropertyFriendlyName "Opvar String"
            bool m_bMatchString; // 0xc            
            uint8_t _pad000d[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::CSosGroupBranchPattern, m_bMatchEventName) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem::CSosGroupBranchPattern, m_bMatchEventSubString) == 0x9);
        static_assert(offsetof(source2sdk::soundsystem::CSosGroupBranchPattern, m_bMatchEntIndex) == 0xa);
        static_assert(offsetof(source2sdk::soundsystem::CSosGroupBranchPattern, m_bMatchOpvar) == 0xb);
        static_assert(offsetof(source2sdk::soundsystem::CSosGroupBranchPattern, m_bMatchString) == 0xc);
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupBranchPattern) == 0x10);
    };
};
