#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xaf8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "Vector m_ragPos"
    // static metadata: MNetworkVarNames "QAngle m_ragAngles"
    // static metadata: MNetworkVarNames "float32 m_flBlendWeight"
    // static metadata: MNetworkVarNames "EHANDLE m_hRagdollSource"
    #pragma pack(push, 1)
    class C_RagdollProp : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa80[0x8]; // 0xa80
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "ragAnglesChanged"
        // m_ragPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<Vector> m_ragPos;
        char m_ragPos[0x18]; // 0xa88        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "13"
        // metadata: MNetworkChangeCallback "ragAnglesChanged"
        // m_ragAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<QAngle> m_ragAngles;
        char m_ragAngles[0x18]; // 0xaa0        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flBlendWeight; // 0xab8        
        // metadata: MNetworkEnable
        // m_hRagdollSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hRagdollSource;
        char m_hRagdollSource[0x4]; // 0xabc        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xac0        
        [[maybe_unused]] std::uint8_t pad_0xac1[0x3]; // 0xac1
        float m_flBlendWeightCurrent; // 0xac4        
        // m_parentPhysicsBoneIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_parentPhysicsBoneIndices;
        char m_parentPhysicsBoneIndices[0x18]; // 0xac8        
        // m_worldSpaceBoneComputationOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_worldSpaceBoneComputationOrder;
        char m_worldSpaceBoneComputationOrder[0x18]; // 0xae0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_RagdollProp because it is not a standard-layout class
    static_assert(sizeof(C_RagdollProp) == 0xaf8);
};
