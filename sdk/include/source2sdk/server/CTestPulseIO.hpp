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
        // Size: 0x600
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTestPulseIO : public source2sdk::server::CLogicalEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnVariantVoid; // 0x4e0            
            source2sdk::entity2::CEntityIOOutput m_OnVariantBool; // 0x508            
            source2sdk::entity2::CEntityIOOutput m_OnVariantInt; // 0x530            
            source2sdk::entity2::CEntityIOOutput m_OnVariantFloat; // 0x558            
            source2sdk::entity2::CEntityIOOutput m_OnVariantString; // 0x580            
            source2sdk::entity2::CEntityIOOutput m_OnVariantColor; // 0x5a8            
            source2sdk::entity2::CEntityIOOutput m_OnVariantVector; // 0x5d0            
            bool m_bAllowEmptyInputs; // 0x5f8            
            uint8_t _pad05f9[0x7];
            
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
        
        // Cannot assert offsets of fields in CTestPulseIO because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTestPulseIO) == 0x600);
    };
};
