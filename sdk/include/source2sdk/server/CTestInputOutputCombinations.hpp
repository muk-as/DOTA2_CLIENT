#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5f8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTestInputOutputCombinations : public source2sdk::server::CLogicalEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnVariantVoid; // 0x4d8            
            source2sdk::entity2::CEntityIOOutput m_OnVariantBool; // 0x500            
            source2sdk::entity2::CEntityIOOutput m_OnVariantInt; // 0x528            
            source2sdk::entity2::CEntityIOOutput m_OnVariantFloat; // 0x550            
            source2sdk::entity2::CEntityIOOutput m_OnVariantString; // 0x578            
            source2sdk::entity2::CEntityIOOutput m_OnVariantColor; // 0x5a0            
            source2sdk::entity2::CEntityIOOutput m_OnVariantVector; // 0x5c8            
            bool m_bAllowEmptyInputs; // 0x5f0            
            uint8_t _pad05f1[0x7];
            
            // Datamap fields:
            // void InputVariantVoid; // 0x0
            // bool InputVariantBool; // 0x0
            // int32_t InputVariantInt; // 0x0
            // float InputVariantFloat; // 0x0
            // CUtlSymbolLarge InputVariantString; // 0x0
            // Color InputVariantColor; // 0x0
            // Vector InputVariantVector; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTestInputOutputCombinations because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTestInputOutputCombinations) == 0x5f8);
    };
};
