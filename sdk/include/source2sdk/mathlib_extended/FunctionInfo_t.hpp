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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FunctionInfo_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_name; // 0x_            
            CUtlStringToken m_nameToken; // 0x_            
            std::int32_t m_nParamCount; // 0x_            
            source2sdk::mathlib_extended::FuseFunctionIndex_t m_nIndex; // 0x_            
            bool m_bIsPure; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::mathlib_extended::FunctionInfo_t, m_name) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::FunctionInfo_t, m_nameToken) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::FunctionInfo_t, m_nParamCount) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::FunctionInfo_t, m_nIndex) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::FunctionInfo_t, m_bIsPure) == 0x_);
        
        static_assert(sizeof(source2sdk::mathlib_extended::FunctionInfo_t) == 0x_);
    };
};
