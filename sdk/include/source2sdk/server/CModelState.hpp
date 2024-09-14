#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x230
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "HModelStrong m_hModel"
    // static metadata: MNetworkVarNames "bool m_bClientClothCreationSuppressed"
    // static metadata: MNetworkVarNames "MeshGroupMask_t m_MeshGroupMask"
    // static metadata: MNetworkVarNames "int8 m_nIdealMotionType"
    #pragma pack(push, 1)
    class CModelState
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0xa0]; // 0x0
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "skeletonModelChanged"
        // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hModel;
        char m_hModel[0x8]; // 0xa0        
        // metadata: MNetworkDisable
        CUtlSymbolLarge m_ModelName; // 0xa8        
        [[maybe_unused]] std::uint8_t pad_0xb0[0x38]; // 0xb0
        // metadata: MNetworkEnable
        bool m_bClientClothCreationSuppressed; // 0xe8        
        [[maybe_unused]] std::uint8_t pad_0xe9[0xaf]; // 0xe9
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
        uint64_t m_MeshGroupMask; // 0x198        
        [[maybe_unused]] std::uint8_t pad_0x1a0[0x7a]; // 0x1a0
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "skeletonMotionTypeChanged"
        int8_t m_nIdealMotionType; // 0x21a        
        // metadata: MNetworkDisable
        int8_t m_nForceLOD; // 0x21b        
        // metadata: MNetworkDisable
        int8_t m_nClothUpdateFlags; // 0x21c        
        [[maybe_unused]] std::uint8_t pad_0x21d[0x13];
        
        // Datamap fields:
        // void m_pVPhysicsAggregate; // 0xe0
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CModelState, m_hModel) == 0xa0);
    static_assert(offsetof(CModelState, m_ModelName) == 0xa8);
    static_assert(offsetof(CModelState, m_bClientClothCreationSuppressed) == 0xe8);
    static_assert(offsetof(CModelState, m_MeshGroupMask) == 0x198);
    static_assert(offsetof(CModelState, m_nIdealMotionType) == 0x21a);
    static_assert(offsetof(CModelState, m_nForceLOD) == 0x21b);
    static_assert(offsetof(CModelState, m_nClothUpdateFlags) == 0x21c);
    
    static_assert(sizeof(CModelState) == 0x230);
};
