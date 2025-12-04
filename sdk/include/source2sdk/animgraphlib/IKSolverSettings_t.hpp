#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/EIKEndEffectorRotationFixUpMode.hpp"
#include "source2sdk/animgraphlib/IKSolverType.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // 
        // static metadata: M_LEGACY_OptInToSchemaPropertyDomain
        #pragma pack(push, 1)
        struct IKSolverSettings_t
        {
        public:
            // metadata: MPropertyFriendlyName "Solver Type"
            // metadata: MPropertyAutoRebuildOnChange
            source2sdk::animgraphlib::IKSolverType m_SolverType; // 0x_            
            // metadata: MPropertyFriendlyName "Num Iterations "
            // metadata: MPropertyAttrStateCallback
            std::int32_t m_nNumIterations; // 0x_            
            // metadata: MPropertyFriendlyName "End Effector Rotation Behaviour"
            source2sdk::animgraphlib::EIKEndEffectorRotationFixUpMode m_EndEffectorRotationFixUpMode; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::IKSolverSettings_t, m_SolverType) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::IKSolverSettings_t, m_nNumIterations) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::IKSolverSettings_t, m_EndEffectorRotationFixUpMode) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::IKSolverSettings_t) == 0x_);
    };
};
