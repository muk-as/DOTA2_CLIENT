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
        // static metadata: MNetworkVarNames "uint8 m_animGraph2SerializeData"
        // static metadata: MNetworkVarNames "int m_nAnimGraph2SerializeDataSizeBytes"
        // static metadata: MNetworkVarNames "int m_animGraph2ReloadCountSV"
        #pragma pack(push, 1)
        class CBaseAnimGraph : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad07a8[0x80]; // 0x7a8
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0x828            
            uint8_t _pad0829[0x7]; // 0x829
            source2sdk::client::IChoreoServices* m_pChoreoServices; // 0x830            
            // metadata: MNetworkEnable
            bool m_bAnimGraphUpdateEnabled; // 0x838            
            uint8_t _pad0839[0x3]; // 0x839
            float m_flMaxSlopeDistance; // 0x83c            
            Vector m_vLastSlopeCheckPos; // 0x840            
            bool m_bAnimationUpdateScheduled; // 0x84c            
            uint8_t _pad084d[0x3]; // 0x84d
            // metadata: MNetworkEnable
            Vector m_vecForce; // 0x850            
            // metadata: MNetworkEnable
            std::int32_t m_nForceBone; // 0x85c            
            uint8_t _pad0860[0x10]; // 0x860
            // metadata: MNetworkEnable
            source2sdk::server::PhysicsRagdollPose_t m_RagdollPose; // 0x870            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
            bool m_bRagdollEnabled; // 0x898            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
            bool m_bRagdollClientSide; // 0x899            
            uint8_t _pad089a[0x196]; // 0x89a
            // metadata: MNetworkEnable
            // metadata: MNetworkSendProxyRecipientsFilter
            // m_animGraph2SerializeData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_animGraph2SerializeData;
            char m_animGraph2SerializeData[0x18]; // 0xa30            
            // metadata: MNetworkEnable
            // metadata: MNetworkSendProxyRecipientsFilter
            std::int32_t m_nAnimGraph2SerializeDataSizeBytes; // 0xa48            
            // metadata: MNetworkEnable
            std::int32_t m_animGraph2ReloadCountSV; // 0xa4c            
            uint8_t _pad0a50[0x30];
            
            // Datamap fields:
            // void m_pMainGraphController; // 0x820
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
