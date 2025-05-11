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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // Has VTable
        // Is Abstract
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CEntityComponentHelper
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            std::uint32_t m_flags; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            source2sdk::entity2::EntComponentInfo_t* m_pInfo; // 0x10            
            std::int32_t m_nPriority; // 0x18            
            uint8_t _pad001c[0x4]; // 0x1c
            source2sdk::entity2::CEntityComponentHelper* m_pNext; // 0x20            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::entity2::CEntityComponentHelper, m_flags) == 0x8);
        static_assert(offsetof(source2sdk::entity2::CEntityComponentHelper, m_pInfo) == 0x10);
        static_assert(offsetof(source2sdk::entity2::CEntityComponentHelper, m_nPriority) == 0x18);
        static_assert(offsetof(source2sdk::entity2::CEntityComponentHelper, m_pNext) == 0x20);
        
        static_assert(sizeof(source2sdk::entity2::CEntityComponentHelper) == 0x28);
    };
};
