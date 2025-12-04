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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            char m_motors[0x_]; // 0x_            
            source2sdk::animgraphlib::CAnimInputDamping m_facingDamping; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nDefaultMotorIndex; // 0x_            
            float m_flDefaultRunSpeed; // 0x_            
            bool m_bMoveVarsDisabled; // 0x_            
            bool m_bNetworkPath; // 0x_            
            bool m_bNetworkFacing; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_paramHandles[34]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMovementComponentUpdater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CMovementComponentUpdater) == 0x_);
    };
};
