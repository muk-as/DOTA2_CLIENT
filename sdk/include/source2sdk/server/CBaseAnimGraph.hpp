#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/PhysicsRagdollPose_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct IChoreoServices;
    };
};

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
        // Size: 0xa80
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkIncludeByName "m_bClientSideRagdoll"
        // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
        // static metadata: MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
        // static metadata: MNetworkVarNames "Vector m_vecForce"
        // static metadata: MNetworkVarNames "int32 m_nForceBone"
        // static metadata: MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
        // static metadata: MNetworkVarNames "bool m_bRagdollEnabled"
        // static metadata: MNetworkVarNames "bool m_bRagdollClientSide"
        #pragma pack(push, 1)
        class CBaseAnimGraph : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad07f0[0x80]; // 0x7f0
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0x870            
            uint8_t _pad0871[0x7]; // 0x871
            source2sdk::client::IChoreoServices* m_pChoreoServices; // 0x878            
            // metadata: MNetworkEnable
            bool m_bAnimGraphUpdateEnabled; // 0x880            
            uint8_t _pad0881[0x3]; // 0x881
            float m_flMaxSlopeDistance; // 0x884            
            Vector m_vLastSlopeCheckPos; // 0x888            
            bool m_bAnimationUpdateScheduled; // 0x894            
            uint8_t _pad0895[0x3]; // 0x895
            // metadata: MNetworkEnable
            Vector m_vecForce; // 0x898            
            // metadata: MNetworkEnable
            std::int32_t m_nForceBone; // 0x8a4            
            uint8_t _pad08a8[0x10]; // 0x8a8
            // metadata: MNetworkEnable
            source2sdk::server::PhysicsRagdollPose_t m_RagdollPose; // 0x8b8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
            bool m_bRagdollEnabled; // 0x8e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
            bool m_bRagdollClientSide; // 0x8e1            
            uint8_t _pad08e2[0x19e];
            
            // Datamap fields:
            // void m_pMainGraphController; // 0x868
            // void CBaseAnimGraphChoreoServicesThink; // 0x0
            // float InputSetPlaybackRate; // 0x0
            // CUtlSymbolLarge InputSetBodyGroup; // 0x0
            // void InputBecomeRagdoll; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseAnimGraph) == 0xa80);
    };
};
