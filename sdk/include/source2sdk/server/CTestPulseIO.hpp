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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTestPulseIO : public source2sdk::server::CLogicalEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnVariantVoid; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnVariantBool; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnVariantInt; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnVariantFloat; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnVariantString; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnVariantColor; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnVariantVector; // 0x_            
            bool m_bAllowEmptyInputs; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputVariantVoid; // 0x_
            // bool InputVariantBool; // 0x_
            // int32_t InputVariantInt; // 0x_
            // float InputVariantFloat; // 0x_
            // CUtlSymbolLarge InputVariantString; // 0x_
            // Color InputVariantColor; // 0x_
            // Vector InputVariantVector; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTestPulseIO because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTestPulseIO) == 0x_);
    };
};
