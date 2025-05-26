#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimComponentUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimMotorUpdaterBase.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMovementComponentUpdater : public source2sdk::animgraphlib::CAnimComponentUpdater
        {
        public:
            // m_motors has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSmartPtr<source2sdk::animgraphlib::CAnimMotorUpdaterBase>> m_motors;
            char m_motors[0x18]; // 0x30            
            source2sdk::animgraphlib::CAnimInputDamping m_facingDamping; // 0x48            
            uint8_t _pad0060[0x8]; // 0x60
            std::int32_t m_nDefaultMotorIndex; // 0x68            
            float m_flDefaultRunSpeed; // 0x6c            
            bool m_bMoveVarsDisabled; // 0x70            
            bool m_bNetworkPath; // 0x71            
            bool m_bNetworkFacing; // 0x72            
            source2sdk::animgraphlib::CAnimParamHandle m_paramHandles[34]; // 0x73            
            uint8_t _pad00b7[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMovementComponentUpdater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CMovementComponentUpdater) == 0xb8);
    };
};
