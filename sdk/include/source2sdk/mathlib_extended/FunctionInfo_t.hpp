#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/FuseFunctionIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace mathlib_extended
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FunctionInfo_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            CUtlString m_name; // 0x8            
            CUtlStringToken m_nameToken; // 0x10            
            std::int32_t m_nParamCount; // 0x14            
            source2sdk::mathlib_extended::FuseFunctionIndex_t m_nIndex; // 0x18            
            bool m_bIsPure; // 0x1a            
            uint8_t _pad001b[0x5];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::mathlib_extended::FunctionInfo_t, m_name) == 0x8);
        static_assert(offsetof(source2sdk::mathlib_extended::FunctionInfo_t, m_nameToken) == 0x10);
        static_assert(offsetof(source2sdk::mathlib_extended::FunctionInfo_t, m_nParamCount) == 0x14);
        static_assert(offsetof(source2sdk::mathlib_extended::FunctionInfo_t, m_nIndex) == 0x18);
        static_assert(offsetof(source2sdk::mathlib_extended::FunctionInfo_t, m_bIsPure) == 0x1a);
        
        static_assert(sizeof(source2sdk::mathlib_extended::FunctionInfo_t) == 0x20);
    };
};
