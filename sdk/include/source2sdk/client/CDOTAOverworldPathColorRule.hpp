#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EOverworldNodeFlags.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldPathColorRule
        {
        public:
            source2sdk::client::EOverworldNodeFlags m_eNodeFlags; // 0x0            
            Color m_cLockedColor; // 0x4            
            Color m_cCompleteColor; // 0x8            
            std::uint8_t m_unLockedThickness; // 0xc            
            std::uint8_t m_unCompleteThickness; // 0xd            
            uint8_t _pad000e[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPathColorRule, m_eNodeFlags) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPathColorRule, m_cLockedColor) == 0x4);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPathColorRule, m_cCompleteColor) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPathColorRule, m_unLockedThickness) == 0xc);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPathColorRule, m_unCompleteThickness) == 0xd);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldPathColorRule) == 0x10);
    };
};
