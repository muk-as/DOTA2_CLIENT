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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldPathColorRule
        {
        public:
            source2sdk::client::EOverworldNodeFlags m_eNodeFlags; // 0x_            
            Color m_cLockedColor; // 0x_            
            Color m_cCompleteColor; // 0x_            
            std::uint8_t m_unLockedThickness; // 0x_            
            std::uint8_t m_unCompleteThickness; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPathColorRule, m_eNodeFlags) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPathColorRule, m_cLockedColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPathColorRule, m_cCompleteColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPathColorRule, m_unLockedThickness) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPathColorRule, m_unCompleteThickness) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldPathColorRule) == 0x_);
    };
};
