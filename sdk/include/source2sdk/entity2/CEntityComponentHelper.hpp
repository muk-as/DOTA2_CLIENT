#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace entity2
    {
        struct EntComponentInfo_t;
    };
};

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace entity2
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Is Abstract
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CEntityComponentHelper
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::uint32_t m_flags; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::EntComponentInfo_t* m_pInfo; // 0x_            
            std::int32_t m_nPriority; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityComponentHelper* m_pNext; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::entity2::CEntityComponentHelper, m_flags) == 0x_);
        static_assert(offsetof(source2sdk::entity2::CEntityComponentHelper, m_pInfo) == 0x_);
        static_assert(offsetof(source2sdk::entity2::CEntityComponentHelper, m_nPriority) == 0x_);
        static_assert(offsetof(source2sdk::entity2::CEntityComponentHelper, m_pNext) == 0x_);
        
        static_assert(sizeof(source2sdk::entity2::CEntityComponentHelper) == 0x_);
    };
};
