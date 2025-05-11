#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/PhysicsRagdollPose_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xac8
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
        class CBaseAnimGraph : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad07d0[0x80]; // 0x7d0
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0x850            
            uint8_t _pad0851[0x1]; // 0x851
            bool m_bSuppressAnimEventSounds; // 0x852            
            uint8_t _pad0853[0xd]; // 0x853
            // metadata: MNetworkEnable
            bool m_bAnimGraphUpdateEnabled; // 0x860            
            uint8_t _pad0861[0x3]; // 0x861
            float m_flMaxSlopeDistance; // 0x864            
            Vector m_vLastSlopeCheckPos; // 0x868            
            bool m_bAnimationUpdateScheduled; // 0x874            
            uint8_t _pad0875[0x3]; // 0x875
            // metadata: MNetworkEnable
            Vector m_vecForce; // 0x878            
            // metadata: MNetworkEnable
            std::int32_t m_nForceBone; // 0x884            
            source2sdk::client::CBaseAnimGraph* m_pClientsideRagdoll; // 0x888            
            bool m_bBuiltRagdoll; // 0x890            
            uint8_t _pad0891[0x17]; // 0x891
            // metadata: MNetworkEnable
            source2sdk::client::PhysicsRagdollPose_t m_RagdollPose; // 0x8a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
            bool m_bRagdollEnabled; // 0x8f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
            bool m_bRagdollClientSide; // 0x8f1            
            uint8_t _pad08f2[0xe]; // 0x8f2
            bool m_bHasAnimatedMaterialAttributes; // 0x900            
            uint8_t _pad0901[0x16f]; // 0x901
            // metadata: MNetworkEnable
            // metadata: MNetworkSendProxyRecipientsFilter
            // m_animGraph2SerializeData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint8_t> m_animGraph2SerializeData;
            char m_animGraph2SerializeData[0x18]; // 0xa70            
            // metadata: MNetworkEnable
            // metadata: MNetworkSendProxyRecipientsFilter
            std::int32_t m_nAnimGraph2SerializeDataSizeBytes; // 0xa88            
            // metadata: MNetworkEnable
            std::int32_t m_animGraph2ReloadCountSV; // 0xa8c            
            uint8_t _pad0a90[0x38];
            
            // Datamap fields:
            // void m_pMainGraphController; // 0x848
            // float InputSetPlaybackRate; // 0x0
            // CUtlSymbolLarge InputSetBodyGroup; // 0x0
            // bool InputDisableAnimEventSounds; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraph) == 0xac8);
    };
};
