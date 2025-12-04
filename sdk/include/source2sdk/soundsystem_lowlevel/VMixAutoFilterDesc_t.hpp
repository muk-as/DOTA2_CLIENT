#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/VMixFilterDesc_t.hpp"
#include "source2sdk/soundsystem_lowlevel/VMixLFOShape_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_lowlevel
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VMixAutoFilterDesc_t
        {
        public:
            float m_flEnvelopeAmount; // 0x_            
            float m_flAttackTimeMS; // 0x_            
            float m_flReleaseTimeMS; // 0x_            
            source2sdk::soundsystem_lowlevel::VMixFilterDesc_t m_filter; // 0x_            
            float m_flLFOAmount; // 0x_            
            float m_flLFORate; // 0x_            
            float m_flPhase; // 0x_            
            source2sdk::soundsystem_lowlevel::VMixLFOShape_t m_nLFOShape; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixAutoFilterDesc_t, m_flEnvelopeAmount) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixAutoFilterDesc_t, m_flAttackTimeMS) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixAutoFilterDesc_t, m_flReleaseTimeMS) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixAutoFilterDesc_t, m_filter) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixAutoFilterDesc_t, m_flLFOAmount) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixAutoFilterDesc_t, m_flLFORate) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixAutoFilterDesc_t, m_flPhase) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixAutoFilterDesc_t, m_nLFOShape) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixAutoFilterDesc_t) == 0x_);
    };
};
