#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmTarget.hpp"
#include "source2sdk/animlib/CNmTask.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x100
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CNmChainSolverTask : public source2sdk::animlib::CNmTask
        {
        public:
            std::int32_t m_nEffectorBoneIdx; // 0x30            
            uint8_t _pad0034[0xc]; // 0x34
            CTransform m_targetTransform; // 0x40            
            std::int32_t m_nNumBonesInChain; // 0x60            
            uint8_t _pad0064[0xc]; // 0x64
            source2sdk::animlib::CNmTarget m_effectorTarget; // 0x70            
            bool m_bIsTargetInWorldSpace; // 0xa0            
            bool m_bIsRunningFromDeserializedData; // 0xa1            
            uint8_t _pad00a2[0x6]; // 0xa2
            CGlobalSymbol m_debugEffectorBoneID; // 0xa8            
            CTransform m_chainStartTransformMS; // 0xb0            
            CTransform m_debugRequestedTargetTransformMS; // 0xd0            
            float m_debugTotalChainLength; // 0xf0            
            uint8_t _pad00f4[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmChainSolverTask because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmChainSolverTask) == 0x100);
    };
};
